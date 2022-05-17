#pragma once
#include "conexion.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        st->DataSource = "localhost\\SQLEXPRESS";
        st->InitialCatalog = "gestiondatos";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }


public:
    void Insertar(int long long dpi, String^ nombre, String^ correo, String^ contraseņa) {
        Conectar();
        String^ sentencia = "Insert into USUARIO values(@dpi, @nombre, @correo, @contraseņa)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@nombre", nombre);
        ejecutar->Parameters->AddWithValue("@correo", correo);
        ejecutar->Parameters->AddWithValue("@contraseņa", contraseņa);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar2(int long long dpi, String^ nombre1, String^ nombre2, String^ apellido1, String^ apellido2, int edad, String^ correo, String^ contraseņa) {
        Conectar();
        String^ sentencia = "Insert into CREAR values(@dpi, @nombre1, @nombre2, @apellido1, @apellido2, @edad, @correo, @contraseņa)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@nombre1", nombre1);
        ejecutar->Parameters->AddWithValue("@nombre2", nombre2);
        ejecutar->Parameters->AddWithValue("@apellido1", apellido1);
        ejecutar->Parameters->AddWithValue("@apellido2", apellido2);
        ejecutar->Parameters->AddWithValue("@edad", edad);
        ejecutar->Parameters->AddWithValue("@correo", correo);
        ejecutar->Parameters->AddWithValue("@contraseņa", contraseņa);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    /*void Insertar2(int id_producto, String^ desc, float precio) {
        Conectar();
        String^ sentencia = "Insert into PRODUCTO values(@id_producto, @desc, @precio)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
        ejecutar->Parameters->AddWithValue("@desc", desc);
        ejecutar->Parameters->AddWithValue("@precio", precio);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar3(int id_venta, int cantidad, int id_cliente, int id_producto) {
        Conectar();
        String^ sentencia = "Insert into VENTA values(@id_venta, @cantidad, @id_cliente, @id_producto)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@id_cliente", id_cliente);
        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }*/
};
