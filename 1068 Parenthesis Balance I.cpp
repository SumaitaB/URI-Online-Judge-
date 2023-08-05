#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,p,len,x,s;
    scanf("%d",&n);
    getchar();
    for(p=1; p<=n; p++)
    {
        for(i=0; i<=1000; i++)
        {
            a[i]='\0';
            b[i]='\0';
        }

        gets(a);

        stack<char>hello;

        len=strlen(a);

        for(i=0; i<len; i++)
        {
            if(a[i]=='('||a[i]==')')
            {
                b[j]=a[i];
            }
        }
        x=strlen(b);
        if(x%2==1)
        {
            cout<<"incorrect"<<endl;
        }
        else if(x%2==0)
        {

            for(i=0; i<len; i++)
            {
                if(a[i]=='(')
                {
                    hello.push(a[i]);
                }
                else if(a[i]==')')
                {
                    hello.push(a[i]);
                }
                else if(!hello.empty()&&a[i]==')'&&hello.top()=='(')
                {
                    hello.pop();
                }
                else if(!hello.empty()&&a[i]=='('&&hello.top()==')')
                {
                    hello.pop();
                }
            }

            if(hello.empty())
            {
                cout<<"correct"<<endl;
            }
            else if(!hello.empty())
            {
                cout<<"incorrect"<<endl;
            }

        }
    }
    return 0;
}

