
class Fractie
{
private:
    int a,b;
public:
    int GetNumarator()
    {
        return a;
    }
    int GetNumitor()
    {
        return b;
    }
    void SetNumarator(int);
    void SetNumitor(int);
    void Simplifica();
    void Afiseaza();
///    void afisare();
    Fractie(int x=0,int y=1);//constr
    Fractie(Fractie &);//const de cap.
    ~Fractie();//destructorul
};
