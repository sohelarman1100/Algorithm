///LINKED LIST 1

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* point;
};

struct node* head;///struct node typer ekta global pointer...ei pointer normal pointer er moto stack memory
///te create hoy orthat er address normal variable ba pointer er moto....kintu er moddhe malloc use kore
/// je address rakha hobe sei address create hoy heap memory te ja normal memory er moto na....normally
///structure er pointer gulo structure type object er moto kaj korte pare.

int main()
{
    struct node s1;///stack memory te node type er ekta structure create hoyeche
    s1.data=6;
    head=NULL;
    head=(struct node*) malloc(sizeof(struct node));///heap memoryte node type er ekta structure create
    ///hoyeche and tar memory address malloc return korche jehetu memory address return korche tai head
    ///pointer e address ti ke point kora hoyeche;
    head->data=4;///head jei address er dike point kore ache shei address e node typer je structure ache
    ///tar data ongser jonno je memory address set kora hoyeche shei address er value 4 korche....(*head).data
    ///and head->data same kotha....chaile head->point er moddhe poroborti kono node er addrsss rakha jeto
    ///structure node er vitor point ba head era shudhu ekti pointer i jar kaj address dharon kora...kintu
    ///head->data ba head->point eigula use hoy head e strucre type je address rakha hoyeche tar jonno.
    cout<<head->data<<endl<<s1.data<<endl;
    free(head);
}
