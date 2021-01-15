int birthday(int s_count, int* s, int d, int m) 
{
    int count=0,sec_count=0;
    for (int i=0; i<s_count; i++)
    {
        count=0;
        for (int j=i; j<m+i; j++) 
        {
            count+=s[j];
        }
        if(count==d)
        {
            sec_count++;
        }
    }
    
    return sec_count;

}
