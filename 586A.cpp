    #include <bits/stdc++.h>
    using namespace std;
    main()
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        int mcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (count == 0 && a[i] == 1)
            {
                mcount++;
            }
            else if (count == 1 && a[i] == 1 && mcount > 0)
            {
                mcount += 2;
                count = 0;
            }
            else if (count >= 2 && a[i] == 1)
            {
                mcount++;
                count = 0;
            }
            else if (a[i] == 0)
            {
                count++;
            }
            else if (count == 1 && a[i] == 1 && mcount == 0)
            {
                mcount++;
                count = 0;
            }
        }
        cout << mcount;
    }
