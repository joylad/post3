#include <iostream>
class post3
{
private:
    int a;
public:
    void seta(int pa)
    {
        a = pa;
    }
    post3 operator+(const post3& b)
    {
        post3 post;
        post.a = this->a+b.a;
        return post;
    }
    int geta()
    {
       return a;
    }
};
int main()
{
    int m, n;
    std::cin >> m >> n;
    post3 p1, p2, p3;
    p1.seta(m);
    p2.seta(n);
    p3 = p1+p2;
    p3.geta();
    return 0;
}
