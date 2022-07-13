
#include <tuple>
#include <vector>

using namespace std;

using duo = tuple<int, int> ;

void    sort_weakest(vector<duo> &vec_weakest)
{

}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        if(k <= 0 || k > mat.size())
            return vector<int>();
        vector<duo> vec_weakest;

        for (int i = 0; i < k; ++i)
        {
            int nbr_sold = 0;
            while (mat[i][nbr_sold])
                ++nbr_sold;
            vec_weakest[i] = duo{i, nbr_sold};
        }
        sort_weakest(vec_weakest);
    }
};