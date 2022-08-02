#include<bits/stdc++.h>
#include<algorithm>
using namespace std;




class YouTubeChannel{
    private:

    protected:
    
    
     public:
        int ChannelID;
        string ChannelName;
        string OwnerName;
        int SubscriberCounts;
        //int numberOfVideos;
        //list<string> VideoList;
      
        //YouTubeChannel(int id, string nam, string onam, int subcnt){
        YouTubeChannel(){  
           cout<<"Enter Channel Id :"<<endl;
            cin>>ChannelID;
            cout<<endl;

            cout<<"Enter Channel Name :\n";
            cin>>ChannelName;
            cout<<endl;

            cout<<"Enter OwnerName :\n";
            cin>>OwnerName;
            cout<<endl;

            cout<<"Enter Subscribers :\n";
            cin>>SubscriberCounts;
            cout<<endl;

        }
       
        //friend ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel);

};




ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel){
       COUT<<"ID: "<<ytChannel.ChannelID<<endl;
       COUT<<"Name: "<<ytChannel.ChannelName<<endl;
       COUT<<"OwnerName: "<<ytChannel.OwnerName<<endl;
       COUT<<"Subscribers: "<<ytChannel.SubscriberCounts<<endl;
       
    //   COUT<<"Videos: ";
    //   for(auto u:ytChannel.VideoList) COUT<<u<<endl;
     
       return COUT;
}

class SubscriptionList: virtual public YouTubeChannel{
    private:

    protected:

    public:
        
    
        list<YouTubeChannel> ChannelList;

        
        void operator +=(YouTubeChannel& channel){
            
            ChannelList.push_back(channel);
            
        }


      // friend ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel);
       
};

ostream& operator << (ostream& COUT, SubscriptionList& cnllist){
    for(YouTubeChannel ytChannel : cnllist.ChannelList)
    COUT<<ytChannel<<endl;
    return COUT;
}



int main(){
    YouTubeChannel yt1;
    
    
    
    // YouTubeChannel yt1(1,"Angry Prush","Prush",2880000);
    // // YouTubeChannel yt2(2,"Round2hell","Nazim",2500000);
    // // YouTubeChannel yt3(3,"AngryLive","Prush",300000);
    
    SubscriptionList cnllist;
    
    cnllist+=yt1;
    
    cout<<cnllist;
    


    return 0;
}
