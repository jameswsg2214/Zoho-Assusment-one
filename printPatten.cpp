#include <iostream>

using namespace std;


int print(string s)
{

    int i,j,k,c=1,n=s.size();

    k=n/2;

    for(i=0; i<n; i++)
    {

        for(j=0; j<n-i-1; j++)
        {

            cout<<" ";

        }

        int flag=0;

        for(k=n/2; k<n/2+i+1; k++)
        {


            if(k<n)
            {
                cout<<s[k];



            }
            else
            {
                flag=1;
                break;

            }

        }


        if(flag)
        {

            for(k=0; k<c; k++)
            {

                cout<<s[k];

            }
            c++;
        }
        cout<<endl;

    }

}

int main()
{
    string s;

    cin>>s;
    print(s);

    return 0;
}
