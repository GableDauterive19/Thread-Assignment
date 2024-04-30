#include <iostream>
#include <thread>
#include <semaphore>
#include <chrono>

using namespace std;

counting_semaphore<1> sem1(0);
counting_semaphore<1> sem2(0);

void runFirst() 
{
    cout << "Run First" << endl;
    sem1.release(); //Let function runSecond know when it is ready to run
}

void runSecond() 
{
    sem1.acquire(); //Signal is waiting from the first function
    cout << "Run me second" << endl;
    sem2.release(); 
}

void runThird() 
{
    sem2.acquire();
    cout << "Run me third" << endl;

}

int main()
{
    thread first(runFirst);
    thread second(runSecond);
    thread third(runThird);

    first.join();
    second.join();
    third.join();

    return 0;
    
}



