void cont_init();
int cont_altaCliente (char* nombre,char* apellido,char* dni);
int cont_altaAlquiler (int idCliente,int idEquipo,int tiempoEstimado, int tiempoReal, int idAquiler, int estado);
int cont_bajaCliente (int id);
int cont_bajaALquiler (int id);
int cont_modificarCliente (int id, char* nombre,char* apellido,char* dni);
int cont_modificarAlquiler (int id, char* a,char* b,int c);
int cont_listarCliente ();
int cont_listarAlquiler ();
int cont_ordenarClientes ();
int cont_ordenarAlquileres ();
int cont_IdExiste(int id);
