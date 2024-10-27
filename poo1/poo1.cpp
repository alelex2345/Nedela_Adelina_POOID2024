#include <iostream>
#include <vector>
#include <string>

// Clasa Carte
class Carte {
private:
    std::string titlu;
    std::string autor;
    int anPublicare;

public:
    Carte(const std::string& t, const std::string& a, int an)
        : titlu(t), autor(a), anPublicare(an) {
    }

    void afiseazaCarte() const {
        std::cout << "Titlu: " << titlu << ", Autor: " << autor
            << ", An Publicare: " << anPublicare << std::endl;
    }
};

// Clasa Biblioteca
class Biblioteca {
private:
    std::vector<Carte> carti;

public:
    void adaugaCarte(const Carte& carte) {
        carti.push_back(carte);
    }

    void afiseazaCarti() const {
        std::cout << "Carti in biblioteca:" << std::endl;
        for (const auto& carte : carti) {
            carte.afiseazaCarte();
        }
    }
};

int main() {
    Biblioteca biblioteca;

    Carte carte1("Micul Print", "Antoine de Saint-Exupery", 1943);
    Carte carte2("1984", "George Orwell", 1949);

    biblioteca.adaugaCarte(carte1);
    biblioteca.adaugaCarte(carte2);

    biblioteca.afiseazaCarti();

    return 0;
}


