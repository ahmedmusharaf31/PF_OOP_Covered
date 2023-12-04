// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     srand(time(0));
//     string s1, s2;
//     cout << "Enter a string: ";
//     cin >> s1;
//     int n1, n2;
//     n1 = rand() % (s1.length()) + 10;
//     cout << "Number of units in s1: " << n1 << endl;
//     if (n1 <= s1.length())
//     {
//         cout << "Underflow statement!" << endl;
//     }
//     else
//     {
//         cout << "Overflow statement!" << endl;
//     }
//     cout << "Enter a second string: ";
//     cin >> s2;
//     n2 = s2.length();
//     n2--;
//     cout << "Number of units in n2: " << n2 << endl;
//     s2.push_back(s1[s1.length()-1]);
//     cout << "Max stack achieved: " << endl;
//     cout << "Second string after decreasing by 1 unit: " << s2 << endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n1;
//     cout<<"Enter number of units: ";
//     cin>>n1;
//     int s1[n1];
//     for(int i=0;i<n1;i++)
//     {
//         cout<<"Enqueue "<<i+1<<": ";
//         cin>>s1[i];
//     }
//     for(int i=0;i<n1;i++)
//     {
//         cout<<s1[i]<<" ";
//     }
//     cout<<endl;
// int search;
// cout<<"Enter the element: ";
// cin>>search;
// for(int i=0;i<n1;i++)
// {
//     if(search==s1[i])
//     {
//         cout<<"Dequeue: "<<i+1<<": ";
//         cout<<s1[i]<<" ";
//         cout<<endl;
//         for(int j=i+1;j<n1;j++)
//         {
//             cout<<s1[j]<<" ";
//         }
//         break;
//     }
// }
// cout<<endl;
//     for(int i=0;i<n1;i++)
//     {
//         cout<<"Dequeue "<<i+1<<": ";
//         cout<<s1[i]<<" "<<endl;
//         for(int j=i+1;j<n1;j++)
//         {
//             cout<<s1[j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Queue is empty! "<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     int capacity;
//     int* queue;
//     int front;
//     int rear;
//     int count;

// public:
//     CircularQueue(int capacity) {
//         this->capacity = capacity;
//         queue = new int[capacity];
//         front = 0;
//         rear = -1;
//         count = 0;
//     }

//     ~CircularQueue() {
//         delete[] queue;
//     }

//     bool is_empty() {
//         return count == 0;
//     }

//     bool is_full() {
//         return count == capacity;
//     }

//     void enqueue(int element) {
//         if (is_full()) {
//             cout << "Overflow error: Circular Queue is full" << endl;
//             return;
//         }

//         rear = (rear + 1) % capacity;
//         queue[rear] = element;
//         count++;
//     }

//     int dequeue() {
//         if (is_empty()) {
//             cout << "Underflow error: Circular Queue is empty" << endl;
//             return -1;
//         }

//         int element = queue[front];
//         queue[front] = -1; // Set the dequeued element as -1 (optional)
//         front = (front + 1) % capacity;
//         count--;
//         return element;
//     }
// };

