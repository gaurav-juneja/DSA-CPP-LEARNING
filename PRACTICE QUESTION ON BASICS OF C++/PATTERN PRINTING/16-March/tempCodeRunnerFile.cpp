if (row==num)
            {
                row=num-1;
                while(row>=1)
                {
                    col=1;
                    while(col<=row)
                    {
                        cout<<"*";
                        col++;
                    }
                }
                cout<<endl;
                row--;
            }
        }