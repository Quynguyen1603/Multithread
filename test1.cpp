#include <iostream>
#include <thread>
#include <chrono>   // thu vien thoi gian
#include <algorithm>  //xu li du lieu mang theo pham vi

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
ull OddSum =0;
ull EvenSum =0;
void findEven (ull start, ull end)
{
    for ( ull i = start; i<= end; ++i)
    {
        if (( i &1 ) == 0)
        {
            EvenSum += i;
        }
    }
}
void findOdd (ull start, ull end)
{
    for ( ull i = start; i<= end; ++i)
    {
        if (( i & 1 ) ==1)
        {
            OddSum += i;
        }
    }
}

int main() {
    ull start =0;
    ull end = 1900000000;
    auto startTime = high_resolution_clock::now();

    std::thread t1(findOdd, start,end);
    std:: thread t2(findEven,start, end);
    // findOdd (start, end);
    // findEven (start, end);
    t1.join();
    t2.join();
    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds> (stopTime-startTime);
    cout<< "Odd Sum: "<< OddSum<<endl;
    cout<< "Even Sum: "<< EvenSum<<endl;
    cout<<"Duration:"<<duration.count()/1000000<<endl;
    return 0;

}
