//logic
//using binary search
while(l<=r);
m1=(l+h)/2;
m2=(len(a1)+len(a2)+1)/2-m1;

l1=a1[m1-1];
r1=a1[m1];
l2=a2[m2-1];
r2=a2[m2];

if(l1<=r2 and l2<=r1)
return median;

else if(l2>r1)
l=m1+1;
else
h=m1-1;

//solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int l = 0, r = nums1.size();
        while (l <= r) {
            int m1 = (l + r) / 2;
            int m2 = ((nums1.size() + nums2.size() + 1) / 2) - m1;

            int l1 = (m1 == 0) ? INT_MIN : nums1[m1 - 1];
            int r1 = (m1 == nums1.size()) ? INT_MAX : nums1[m1];

            int l2 = (m2 == 0) ? INT_MIN : nums2[m2 - 1];
            int r2 = (m2 == nums2.size()) ? INT_MAX : nums2[m2];

            if (l1 <= r2 && l2 <= r1) {
                if ((nums1.size() + nums2.size()) % 2 == 0)
                    return (double)(max(l1, l2) + min(r2, r1)) / 2;
                else
                    return (double)(max(l1, l2));
            } else if (l2 > r1)
                l = m1 + 1;
            else
                r = m1 - 1;
        }
        return 0.0;
    }
};
;

/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
         v.push_back(nums1[i]);
         
         for(int i=0;i<nums2.size();i++)
         v.push_back(nums2[i]);

         sort(v.begin(),v.end());
        long long sum=0;
        long long n=v.size();
        float avrg=0;
        if(n%2==0){
            sum=v[n/2]+v[n/2-1];
            avrg=(float)sum/2;
            
        }
        else{
            avrg=(float)v[n/2];
        }
        return avrg;
    }
};
*/
