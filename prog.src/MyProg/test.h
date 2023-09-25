#ifndef TEST
#define TEST


class Test
{
public:
    Test();
    ~Test();
    int number();
    void setNumber(int number);
private:
    int m_number;
};
#endif