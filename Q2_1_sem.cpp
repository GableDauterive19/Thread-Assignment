#include <iostream>
#include <thread>
#include <semaphore>

using namespace std;

binary_semaphore sem(0);

void runMeFirst()
{
    cout << "Run me first" << endl;
    sem.release();
}

void runMeSecond()
{
    sem.acquire();
    cout << "I run second" << endl;
}

int main ()
{
    thread firstThread(runMeFirst);
    thread secondThread(runMeSecond);

    firstThread.join();
    secondThread.join();
    
    
    return 0; 
}


