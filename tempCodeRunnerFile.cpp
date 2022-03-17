
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        while (v[i] != 0 && maxdoub != 0)
        {
            ans += v3[k];
            k++;
            v[i]--;
            maxdoub--;
        }
    }