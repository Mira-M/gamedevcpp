class FloatAdder
{
    public:
    //Constructor
    FloatAdder()
    {
        m_sum = 0;
    }
    // add function
    void Add( float p_number)
    {
        m_sum += p_number;
    }

    //get sum function
    float Sum()
    {
        return m_sum;
    }

    private:
        //sum variable
        float m_sum;
};
