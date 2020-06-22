///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE-SWE'19)

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll c[4][4];


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c [i][j]=0;
        }
    }



    ///PRE START FORMALITIES

    ll count=0;
    cout<<"WELCOME TO TIC TAC TOE"<<endl;
    cout<<"PREPARED BY MD SADMAN MEHEDI SIVAN"<<endl<<endl<<endl;
    cout<<"Who wants to start the game?"<<endl;
    cout<<"Press 1 for Player 1 AND Press 2 for Player 2"<<endl;
    cout<<"Your answer:"<<endl;
    ll x;

    ///CHECKING THE RIGHT INPUT


    while(1)
    {
        cin>>x;

        if(x<1 || x>2)
        {
            cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
            continue;
        }
        else
            break;
    }


    ///MATCH START
    map<ll,ll>mp;

    while(1)
    {


        ///IF THE FIRST PERSON START THE MATCH

        if(x==1)
        {

            count++;

            if(count==10)
            {
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout<<c [i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<"The match is Draw!!"<<endl;
                return 0;
            }

            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    cout<<c [i][j]<<" ";
                }
                cout<<endl;
            }

            if(count%2==1)
            {
                cout<<"Player 1 give your input->"<<endl;

                ll r;

                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }

                    else
                    {
                        cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
                        continue;
                    }

                }








                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=1;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=1;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=1;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

            }


            ///WHEN SECOND PERSON IS GIVING SHOT


            else
            {

                if(count==10)
                {
                    for(int i=0; i<3; i++)
                    {
                        for(int j=0; j<3; j++)
                        {
                            cout<<c [i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    cout<<"The match is Draw!!"<<endl;
                    return 0;
                }


                cout<<"Player 2 give your input"<<endl;
                ll r;



                while(1)
                {
                    cin>>r;


                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }

                    else
                    {
                        cout<<"Invalid Input!"<<endl<<"Press again-> "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }


            }



        }

        ///IF THE SECOND PERSONT START THE MATCH


        else
        {

            count++;

            if(count==10)
            {
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout<<c [i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<"The match is Draw!!"<<endl;
                return 0;
            }
            ///SECOND PERSON GIVING HIS SHOT

            if(count%2==1)
            {

                cout<<"Player 2 give your input"<<endl;
                ll r;


                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout<<c [i][j]<<" ";
                    }
                    cout<<endl;
                }


                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl<<"Press again: "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=2;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=2;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=2;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=2;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=2;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {

                    c[2][2]=2;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 2!!You won the game!!"<<endl;
                        return 0;
                    }

                }

            }
            else
            {


                if(count==10)
                {
                    for(int i=0; i<3; i++)
                    {
                        for(int j=0; j<3; j++)
                        {
                            cout<<c [i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    cout<<"The match is Draw"<<endl;
                    return 0;
                }
                cout<<"Player 1 give your input"<<endl;
                ll r;


                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        cout<<c [i][j]<<" ";
                    }
                    cout<<endl;
                }

                ///PERSON 1 GIVING HIS SHOT
                while(1)
                {
                    cin>>r;

                    if((r>=1 && r<=9) && mp[r]==0)
                    {
                        mp[r]++;
                        break;
                    }
                    else
                    {
                        cout<<"Invalid Input"<<endl<<"Press again: "<<endl;
                        continue;
                    }

                }




                if(r==1)
                {
                    c[0][0]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][0]==c[1][0] && c[0][0]==c[2][0]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }


                }

                if(r==2)
                {
                    c[0][1]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][1]==c[1][1] && c[0][1]==c[2][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==3)
                {
                    c[0][2]=1;

                    if((c[0][0]==c[0][1] && c[0][1] ==c[0][2])||(c[0][2]==c[1][2] && c[0][2]==c[2][2]) ||(c[0][2]==c[1][1] && c[1][1]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==4)
                {
                    c[1][0]=1;

                    if((c[0][0]==c[1][0] && c[0][0] ==c[2][0])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Player 1 won"<<endl;
                        return 0;
                    }
                }

                if(r==5)
                {
                    c[1][1]=1;

                    if((c[1][1]==c[0][1] && c[2][1] ==c[0][1])||(c[1][0]==c[1][1] && c[1][1]==c[1][2]) ||(c[0][0]==c[1][1] && c[0][0]==c[2][2]) ||(c[0][2]==c[1][1] && c[0][2]==c[2][0]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

                if(r==6)
                {
                    c[1][2]=1;

                    if((c[1][2]==c[0][2] && c[1][2] ==c[2][2])||(c[1][2]==c[1][0] && c[1][1]==c[1][2]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==7)
                {
                    c[2][0]=1;

                    if((c[2][0]==c[1][0] && c[0][0] ==c[1][0])||(c[2][0]==c[2][1] && c[2][1]==c[2][2]) ||(c[2][0]==c[1][1] && c[1][1]==c[0][2]))
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }
                if(r==8)
                {
                    c[2][1]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[2][1]==c[1][1] && c[1][1]==c[0][1]) )
                    {
                        for(int i=0; i<3; i++)
                        {
                            for(int j=0; j<3; j++)
                            {
                                cout<<c [i][j]<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }
                }

                if(r==9)
                {
                    for(int i=0; i<3; i++)
                    {
                        for(int j=0; j<3; j++)
                        {
                            cout<<c [i][j]<<" ";
                        }
                        cout<<endl;
                    }

                    c[2][2]=1;

                    if((c[2][0]==c[2][1] && c[2][1] ==c[2][2])||(c[0][2]==c[1][2] && c[1][2]==c[2][2]) ||(c[2][2]==c[1][1] && c[0][0]==c[1][1]))
                    {
                        cout<<"Congratulations Player 1!!You won the game!!"<<endl;
                        return 0;
                    }

                }

            }




        }


    }
    return 0;

}
