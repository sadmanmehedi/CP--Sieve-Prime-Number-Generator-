bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first) return a.second < b.second;
    return a.first > b.first;
}
int main()
{

 sort(dhamaka.begin(),dhamaka.end(),comp);
 
 
 }
