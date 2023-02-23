template <typename T>
class Grille
{
    /** \brief La taille suivant x de l'image **/
    int Nx;
    /** \brief La taille suivant y de l'image **/
    int Ny;

    /** \brief Les donnees de l'image **/
    std::vector<T> data;

    /** Certifie que (x,y) soit bien contenu dans l'image
     *  \return rien, mais quitte si les coordonnee sont hors de l'image
     **/
    void assert_coord(int x,int y) const;

    /** \brief Operateur "get" pour des coordonnees (x,y) **/
    T const& operator()(int x,int y) const;

    /** \brief Operateur "get/set" pour des coordonnees (x,y) **/
    T& operator()(int x,int y);

    /** \brief Redimentionne l'image a une nouvelle taille
      * Les parametres (Nx,Ny) sont remis a jour, et le vecteur
      * de donnees est redimensionne (mais il n'efface pas les donnees
      * precedente).
      **/
    void resize(int Nx_arg,int Ny_arg);
};

