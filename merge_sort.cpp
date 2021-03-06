void merge(vector<int>&x,int l,int m,int r){
    int i=l;
    int j=m+1;
    vector<int>y;
    while(i<=m&&j<=r){
        if(x[i]<x[j])
            y.push_back(x[i]);
        else
            y.push_back(x[j]);
        j++;
    }
    while(i<=m){
        y.push_back(x[i]);
        i++;
        }
    while(j<=r){
        y.push_back(x[j]);
        j++;
        }
    for(i=l;i<=r;i++)
    x[i]=y[i-l];
}
void merge_sort(vector<int>&x,int l,int r){
    if(l==r)return;
    int m=(l+r)/2;
    merge_sort(x,l,m);
    merge_sort(x,m+1,r);
    merge(x,l,m,r);
}
