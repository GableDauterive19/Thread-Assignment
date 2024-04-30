//Gable Dauterive
#include <iostream>
#include <thread>
#include <semaphore>
#include <chrono>
#include <queue>

using namespace std;
//Pretty confused on this one

queue<RequestStructure> msg_queue;
mutex mtx;
condition_variable cv;
int request_counter = 0;
struct RequestStructure 
{
    int request_id;
    string ip_address;
    string page_requested;
};

string webPages[10] = {"google.com", "yahoo.com", "facebook.com", "twitter.com", "instagram.com",
                       "linkedin.com", "reddit.com", "youtube.com", "baidu.com", "wikipedia.org"};


void listen() 
{

}

void dorequest()
{

}





