TEST_CASE("Mostrar Menu")
{
    Player p;
    Menu menu;
    ItemsStorage storage("./filetest.txt");
    menu.listarAtividades(&p, &storage);
}