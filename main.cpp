//
//  main.cpp
//  文件传输～
//
//  Created by s20181106119 on 2019/6/20.
//  Copyright © 2019 s20181106119. All rights reserved.
//

#include <iostream>
#include<fstream>

using namespace std;
int main(int argc, const char * argv[]) {
   
    ifstream in("/Users/s20181106119/Desktop/裁判信息及分数.txt");
    {
        
        struct caipan
        {
            int s[3],i,l,t;
            char name[7];
            for(l=0;l<7;l++)
            {
                in>>name[l];
                for(i=0;i<3;i++)
                {
                    in>>s[i];
                    if(s[i]>s[i+1])
                    {
                        t=s[i];
                        s[i]=s[i+1];
                        s[i+1]=t;
                    }
                }
            }
            in.close();
        };
        ofstream output("/Users/s20181106119/Desktop/最终排名.txt");
                        {
                            int i,l;
                            int s[3];
                            char name[7];
                            for(l=0;l<7;l++)
                            {
                                output<<name[l];
                                for(i=0;i<3;i++)
                                {
                                    output<<s[i];
                                    
                                }
                            }
                            
                        }
        output.close();
    }
    return 0;
}
