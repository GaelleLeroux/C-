struct color
{
    //couleur r,g,b
    int r,g,b;
    //constructeurs
    color():r(0),g(0),b(0);

    color(int r_arg,int g_arg,int b_arg);

};

std::ostream& operator<<(std::ostream& stream,const color& c)