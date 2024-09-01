 #include<iostream>
 using namespace std;
 int main()
 {
    int pocketmoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
            //this is used to next iteration of the loop;
        }
        if(pocketmoney==0)
        {
            break;
            //break is used to terminate the looop;
            
        }
        cout<<"can go out today"<<endl;
      pocketmoney=pocketmoney-300;
    }
 }