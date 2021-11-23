-- Suppression de la DATABASE si elle existe déjà
DROP DATABASE IF EXISTS CESI_BDD;
-- Création de la DATABASE
CREATE DATABASE CESI_BDD;

-- Création du login de connexion cesi
DROP LOGIN cesi;
CREATE LOGIN cesi WITH PASSWORD = 'azerty', CHECK_POLICY = OFF, CHECK_EXPIRATION = OFF;

USE [CESI_BDD];
-- Création du user cesi correspondant au login cesi 
DROP USER IF EXISTS cesi;
CREATE USER cesi FOR LOGIN cesi;
-- Ajout des droits à l'utilisateur cesi pour manipuler la BDD
EXEC sp_addrolemember N'db_owner', N'cesi';
EXEC sp_addrolemember N'db_datareader', N'cesi';
EXEC sp_addrolemember N'db_datawriter', N'cesi';

DROP TABLE IF EXISTS TB_PERSONNE ; 
CREATE TABLE TB_PERSONNE (id_personne INT NOT NULL IDENTITY PRIMARY KEY, nom VARCHAR(50), prenom VARCHAR(50)); 

DROP TABLE IF EXISTS TB_ADRESSE ; 
CREATE TABLE TB_ADRESSE (id_adresse INT NOT NULL IDENTITY PRIMARY KEY, adresse VARCHAR(150), cp VARCHAR(5), ville VARCHAR(50), id_personne int FOREIGN KEY REFERENCES TB_PERSONNE(id_personne));