#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {   long int pen,pencil;
        long int lec,prectical,npen,npencil,max;
        cin>>lec>>prectical>>npen>>npencil>>max;
        if(lec<npen)
            pen=1;
        else if(lec%npen)
            pen=lec/npen+1;
        else
            pen=lec/npen;
        if(prectical<npencil)
            pencil=1;
        else if(prectical%npencil)
            pencil=prectical/npencil + 1;
        else
            pencil=prectical/npencil;
        if(pen+pencil<=max)
            cout<<pen<<" "<<pencil<<endl;
        else
            cout<<-1<<endl;
    }
}
