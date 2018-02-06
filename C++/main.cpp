#include <iostream>

using namespace std;

int main()
{
    std::cout <</* "*/" /* "/*" */;
    /*std::cout <<"Hello World";
    std::cout << std::endl;
    int v1,v2;
    std::cin >>v1>>v2;
    std::cout <<"The Sum of " <<v1;
    std::cout<< " and " <<v2;
    std::cout<< " is " <<v1+v2<< std::endl;
    */
    /*std::cout<<"\n"
            "\tHi!\n"<<std::endl;
    int sum=0,val,en;
    while(std::cin>>en>>val){
        if(val>=en)
            for(val;val>=en;--val)
                std::cout<< val<<std::endl;
        else
            for(en;en>=val;--en)
                std::cout<< en <<std::endl;
    }
    std::cout<<"Sum is " <<sum<<std::endl;

    int curr=0,val=0;
    if(std::cin>>curr){
        int count=1;
        while(std::cin>>val){
            if(val==curr){
                count++;
            }
            else{
                std::cout<<curr <<" occurs " << count <<std::endl;
                curr=val;
                count=1;
            }
        }
        std::cout<<curr <<" occurs " << count <<std::endl;
    }
    */
    /*int i=100, Sum=0;
    for(int i =0;i!=10;++i)
        Sum+=i;
    std::cout<<i<<" "<<Sum<<std::endl;*/
    int i,&r1=i;
    i=5;
    r1=10;
    //double d=5.2,&r2=d;
    //r1=r2;
    std::cout<<r1<<" "<<i<<std::endl;

    return 0;
}
