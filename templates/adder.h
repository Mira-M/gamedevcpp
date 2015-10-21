template< class T >
class Adder
{
    public:
    //Constructor
    Adder()
    {
        m_sum = 0;
    }
    // add function
    void Add( T p_number)
    {
        m_sum += p_number;
    }

    //get sum function
    T Sum()
    {
        return m_sum;
    }

    private:
        //sum variable
        T m_sum;
};
