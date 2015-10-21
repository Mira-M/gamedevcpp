class IntAdder
{
    public:
    //Constructor
    IntAdder()
    {
        m_sum = 0;
    }
    // add function
    void Add( int p_number)
    {
        m_sum += p_number;
    }

    //get sum function
    int Sum()
    {
        return m_sum;
    }

    private:
        //sum variable
        int m_sum;
};
