#include <bits/stdc++.h>

using namespace std;

ifstream fin("citire.in");



struct Tabel
{
    char NumeElem[49];

    char Simbol[4];
    char NumeDescoperitor[100];
    int NrAtomic;
    int PctTopire;
    int PctFierbere;
    int AnDescoperire;
    int NrMasa;

} M[120];

void Citire_Elem()
{
    for (int i = 1; i <= 120; i++)
        fin >> M[i].NumeElem;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].Simbol;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].NrAtomic;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].PctTopire;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].PctFierbere;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].AnDescoperire;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].NumeDescoperitor;
    for (int i = 1; i <= 120; i++)
        fin >> M[i].NrMasa;
}

void NrMasa()
{
    for (int i = 1; i <= 120; i++)
    {
        if (M[i].NrMasa == 6969)
            {
                cout << " Numarul de masa al elementului " << M[i].NumeElem << " este nedefinit ";
                cout << "\n";
            }
        else
           {
               cout << " Numarul de masa al elementului " << M[i].NumeElem << " este egal cu: " << M[i].NrMasa;
               cout << "\n";
           }
    }
}

void NumeElem()
{
    for (int i = 1; i <= 120; i++)
    {
        cout << "Numele elementului este: " << M[i].NumeElem;
        cout << "\n";
    }
}

void Simbol()
{
    for (int i = 1; i <= 120; i++)
    {
        cout << "Simbolul elementului " << M[i].NumeElem << " este: " <<M[i].Simbol << " ";
        cout << "\n";
    }
}


void NrAtomic()
{
    for(int i = 1; i <= 120; i++)
    {
        cout << "Numarul atomic al elementului " << M[i].NumeElem << " este: " <<M[i].NrAtomic << " ";
        cout << "\n";
    }
}


void PctTopire()
{
    for (int i = 1; i <= 120; i++)
        if (M[i].PctTopire == 696969)
        {
            cout << "Punctul de topire al elementului " << M[i].NumeElem << "este nedeterminat.";
            cout << "\n";
        }
        else
        {
            cout << "Punctul de topire al elementului " << M[i].NumeElem << " este aproximativ = cu " <<M[i].PctTopire << " ";
            cout << "\n";
        }
}


void PctFierbere()
{
    for (int i = 1; i <= 120; i++)
    {
        if (M[i].PctFierbere == 696969)
        {
            cout << "Punctul de fierbere al elementului " << M[i].NumeElem <<  " este nedeterminat.";
            cout << "\n";
        }
        else
        {
            cout << "Punctul de fierbere al elementului " << M[i].NumeElem << " este aproximativ = cu " <<M[i].PctFierbere << " ";
            cout << "\n";
        }
    }
}


void AnDescoperire()
{
    for (int i = 1; i <= 120; i++)
        if (M[i].AnDescoperire == 696969)
        {
            cout << "Anul descoperirii elementului " << M[i].NumeElem <<  " este nedeterminat. ";
            cout << "\n";
        }
        else if (M[i].AnDescoperire == 69696969)
        {
            cout << "Descoperirea elementului  " << M[i].NumeElem <<  " a fost facuta in epoca preistorica. ";
            cout << "\n";
        }
        else
        {
            cout << "Descoperirea elementului " << M[i].NumeElem << " a fost facuta in anul: " << M[i].AnDescoperire;
            cout << "\n";
        }
}


void NumeDescoperitor()
{
    for (int i = 1; i <= 120; i++)
    {
        cout << "Descoperitorul elementului " << M[i].NumeElem << " este considerat: " << M[i].NumeDescoperitor << " ";
        cout << "\n";
    }
}


void AfisareElemente()
{
    for (int i = 1; i <= 120; i++)
    {
        cout << "Numele elementului este: " << M[i].NumeElem << " ";
        cout << "\n";
        cout << "Simbolul elementului este: " <<M[i].Simbol << " ";
        cout << "\n";
        cout << "Numarul atomic al elementului este: " <<M[i].NrAtomic << " ";
        cout << "\n";
        if (M[i].PctTopire == 696969)
        {
            cout << "Punctul de topire al elementului este nedeterminat.";
            cout << "\n";
        }
        else
        {
            cout << "Punctul de topire al elementului este aproximativ = cu " <<M[i].PctTopire << " ";
            cout << "\n";
        }
        if (M[i].PctFierbere == 696969)
        {
            cout << "Punctul de fierbere al elementului este nedeterminat.";
            cout << "\n";
        }
        else
        {
            cout << "Punctul de fierbere al elementului este aproximativ = cu " <<M[i].PctFierbere << " ";
            cout << "\n";
        }
        if (M[i].AnDescoperire == 696969)
        {
            cout << "Anul descoperirii elementului este nedeterminat. ";
            cout << "\n";
        }
        else if (M[i].AnDescoperire == 69696969)
        {
            cout << "Descoperirea a fost facuta in epoca preistorica. ";
            cout << "\n";
        }
        else
        {
            cout << "Descoperirea a fost facuta in anul: " << M[i].AnDescoperire;
            cout << "\n";
        }
        cout << "Descoperitorul elementului este considerat: " << M[i].NumeDescoperitor << " ";
        cout << "\n";
        cout << "\n";
    }
}


void Meniu_Principal()
{
    cout << " Puteti alege dintre urmatoarele optiuni:";
    cout << "\n";
    cout << "\n";
    cout << " Pentru a afisa toate informatiile despre elementele tabelului periodic apasati tasta 0.";
    cout << "\n";
    cout << " Numele elementului - 1.";
    cout << "\n";
    cout << " Simbolul Elementului - 2.";
    cout << "\n";
    cout << " Numarul Atomic - 3.";
    cout << "\n";
    cout << " Punctul de topire al elementului - 4.";
    cout << "\n";
    cout << " Punctul de fierbere al elementului - 5.";
    cout << "\n";
    cout << " Anul descoperirii elementului - 6.";
    cout << "\n";
    cout << " Numele celui ce a descoperit elementul - 7.";
    cout << "\n";
    cout << " Numarul de masa al elementului - 8.";
    cout << "\n";

}


void Introducere()
{
    cout << "Proiectul meu afiseaza si ofera informatii despre tabelul lui Mendeleev. ";
    cout << "\n";
    cout << "Doriti afisarea elementelor din Tabelul Periodic construit de Mendeleev?";
    cout << "\n";
    cout << "Introduceti tasta '1' daca doriti sa fie afisate informatii despre elementele tabelului.";
    cout << "\n";
    cout << "In al doilea caz, puteti efectua Masa Moleculara a unei formule introducand tasta '2', sau solicitati inchiderea programului apasand tasta '0'";
    cout << "\n";
    cout << "Pentru a afisa doar informatii despre un anume element, introduceti tasta 3.";
    cout << "\n";
}

int z;
int main()
{
    char NumeCompus2[120];
    char NumeCompus[120];
    int x, y;
    Citire_Elem();
    map <string, Tabel> NRMASA;
    map <string, Tabel> NRMASA1;
    for (int i = 1;i <= 120;++i)
        NRMASA[M[i].Simbol] = M[i];
    for (int i = 1;i <= 120;++i)
        NRMASA1[M[i].NumeElem] = M[i];
    while (true)
    {
        Introducere();
        cin >> x;
        if (x == 0)
            return 0;
        else if (x == 1)
        {
            Meniu_Principal();
            cin >> y;
            if (y == 0)
            {
                AfisareElemente();
            }
            if (y == 1)
            {
                NumeElem();
            }
            if (y == 2)
            {
                Simbol();
            }
            if (y == 3)
            {
                NrAtomic();
            }
            if (y == 4)
            {
                PctTopire();
            }
            if (y == 5)
            {
                PctFierbere();
            }
            if (y == 6)
            {
                AnDescoperire();
            }
            if (y == 7)
            {
                NumeDescoperitor();
            }
            if (y == 8)
            {
                NrMasa();
            }
        }
        else if (x == 2)
        {
            cout << "Ati ales sa calculati M - Masa moleculara";
            cout << "\n";
            cout << "Scrieti cati atomi diferiti are formula dumneavoastra!";
            cout << "\n";
            cout << "Introduceti pe rand simbolul atomilor, iar dupa aceea numarul de atomi, pe rand";
            cout << "\n";

            cout << "Spre exmemplu: \n3\nAr 2\nH 2\nC 3\n   Configuratia dumneavoastra este (introduceti datele la fel ca mai sus):\n";


            int NrM, n, SumM = 0;
            cin >> n;
            for (int i = 1; i <= n; i ++)
            {
                cin >> NumeCompus;
                NrM = NRMASA[NumeCompus].NrMasa;
                cin >> x;
                SumM += x * NrM;
            }

            cout << "Masa moleculara a formulei dumneavoastra este = " << SumM;
            cout << "\n";\

        }
       else if (x == 3)
        {
            cout << "La aceasta optiune puteti cauta toate informatiile despre un anume element";
            cout << "\n";
            cout << "Introduceti va rog numele elementului despre care doriti sa aflati informatii ";
            cout << "\n";
            cout << "Ex:\nClor\nSodiu_Natriu\n";
            cin >> NumeCompus2;
            Tabel aux = NRMASA1[NumeCompus2];
            cout << "Numarul de masa este: ";
            cout << aux.NrMasa;
            cout << "\n";
            cout << "Numele Simbolului este: ";
            cout << aux.Simbol;
            cout << "\n";
            cout << "Numarul atomic este: ";
            cout << aux.NrAtomic;
            cout << "\n";
            cout << "Punctul de fierbere este: ";
            cout << aux.PctFierbere;
            cout << "\n";
            cout << "Punctul de topire este: ";
            cout << aux.PctTopire;
            cout << "\n";
            cout << "Anul descoperirii este: ";
            cout << aux.AnDescoperire;
            cout << "\n";
            cout << "Numele descoperitorului este: ";
            cout << aux.NumeDescoperitor;
            cout << "\n";

        }

        cout << "\n";
        cout << "Daca doriti inchiderea programului apasati tasta '0'";
        cout << "\n";
        cout << "Daca doriti intoarcerea la meniul principal apasati orice alta cifra";
        cout << "\n";
        cin >> z;
        if (z == 0)
            return 0;
        else
            system("cls");
    }


    return 0;
}

