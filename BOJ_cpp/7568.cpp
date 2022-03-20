#include <iostream>
#include <vector>

class Man {
    private :
        int H;
        int W;
        int rank;
    public :
        Man() {};
        Man(int H, int W) : H(H), W(W) {};
        ~Man() {};
        int getH(){ return this->H; };
        int getW(){ return this->W; };
        int getR(){ return this->rank; };
        void setRank(int rank){this->rank = rank;};
};

int main()
{
    std::vector<Man> vec;
    int limit;
    std::cin >> limit;
    for (int i = 0; i < limit; i++)
    {
        int h, w;
        std::cin >> w >> h;
        vec.push_back(Man(h,w));
    }
    for (int i = 0; i < limit; i++)
    {
        int rank = 1;
        for (int j = 0; j < limit; j++)
        {
            if (i != j)
            {
                if (vec[i].getH() < vec[j].getH() && vec[i].getW() < vec[j].getW())
                rank++;
            }
        }
        vec[i].setRank(rank);
    }
    for (int i = 0; i < limit; i++)
    {
        std::cout << vec[i].getR() << " ";
    }
    return 0;
}