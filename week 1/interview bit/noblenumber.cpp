/*
Problem Description
Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.

Input Format
First and only argument is an integer array A.

Output Format
Return 1 if any such integer p is found else return -1.
*/
#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key;
        key=a[i];
        int j=i;
        while(key<a[j-1]&&j>=0)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
    }
}
int main()
{
    int s;
    int a[10];
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    sort(a,s);
    for(int i=0;i<s;i++)
    {
        if(a[i]==(s-(i+1)))
        {
            cout<<"1";
            return 0;
        }
    }
    cout<<"-1";
}
