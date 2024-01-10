#include "tcp.hpp"
#define port 40145
#define num_of_node 2
#define server_ip "<my name>-a.<my name>-headless-svc"
#define buf_size 1024 //버프사이즈 정의

string node_domain[num_of_node] = {server_ip,"<my name>-b.<my name>-headless-svc"};
string node[num_of_node];
string my_ip;

int main(int argc, char* argv[]){
    vector<int> sock_idx;
    TCP tcp;

    cout << "check my ip" << endl;
    my_ip = tcp.check_my_ip();
    cout << "finish! this pod's ip is " <<my_ip << endl;
    //Domain to IP
    cout << "Changing domain to ip ..." << endl;
    
    cout << "Success" << endl;
    cout << "------------------------------------" << endl;

    //connect tcp


    //get socket

    //start send and recive

    while(1){
        sleep(1000);
    }

  return 0;
}
