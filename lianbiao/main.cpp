//
//  main.cpp
//  lianbiao
//
//  Created by 20141105052 on 15/12/2.
//  Copyright (c) 2015年 20141105052郭孝宇. All rights reserved.
//

#include <iostream>
struct student
{
    char name[100];
    //char sex;
    int age;
    student *next;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //student A,B,C,D;
    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s%d",q->name,&(q->age));
        p=q;
    }
    p=head->next;
    
    //scanf("%s%d",B.name,&B.age);
    //scanf("%s%d",C.name,&C.age);
    //scanf("%s%d",D.name,&D.age);
    //printf("&A=%x,&B=%x,&C=%x,&D=%x\n",&A,&B,&C,&D);
    //A.next=&B;
    //B.next=&C;
    //C.next=&D;
    //D.next=0;
    /*printf("%s %d\n",A.name,A.age);
    printf("%s %d\n",B.name,B.age);
    printf("%s %d\n",C.name,C.age);
    printf("%s %d\n",D.name,D.age);*/
    //printf("%x   ,%x   ,%x,   %x",&A,&B,&C,&D);
    //head=&A;
    //p=head;
    while(p!=0)
    {
        printf("%s %d  p=%x\n",p->name,p->age,p);
        p=p->next;
    }
    return 0;
}
