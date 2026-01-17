CREATE TABLE Country (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL
);

CREATE TABLE Region (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    country_id INT NOT NULL,
    FOREIGN KEY (country_id) REFERENCES Country(id)
);

CREATE TABLE City (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    region_id INT NOT NULL,
    FOREIGN KEY (region_id) REFERENCES Region(id)
);

CREATE TABLE Address (
    id INT IDENTITY PRIMARY KEY,
    street NVARCHAR(150) NOT NULL,
    city_id INT NOT NULL,
    FOREIGN KEY (city_id) REFERENCES City(id)
);

CREATE TABLE Category (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL
);

CREATE TABLE Producer (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    address_id INT NOT NULL,
    FOREIGN KEY (address_id) REFERENCES Address(id)
);

CREATE TABLE Supplier (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    address_id INT NOT NULL,
    FOREIGN KEY (address_id) REFERENCES Address(id)
);

CREATE TABLE Measurement (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(50) NOT NULL,
    description NVARCHAR(200)
);

CREATE TABLE Markup (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(50) NOT NULL,
    percent_value DECIMAL(5,2) NOT NULL
);

CREATE TABLE Product (
    id INT IDENTITY PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    category_id INT NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    quantity INT NOT NULL,
    producer_id INT NOT NULL,
    measurement_id INT NOT NULL,
    markup_id INT NOT NULL,
    FOREIGN KEY (category_id) REFERENCES Category(id),
    FOREIGN KEY (producer_id) REFERENCES Producer(id),
    FOREIGN KEY (measurement_id) REFERENCES Measurement(id),
    FOREIGN KEY (markup_id) REFERENCES Markup(id)
);

CREATE TABLE Delivery (
    id INT IDENTITY PRIMARY KEY,
    product_id INT NOT NULL,
    supplier_id INT NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    quantity INT NOT NULL,
    delivery_date DATE NOT NULL,
    FOREIGN KEY (product_id) REFERENCES Product(id),
    FOREIGN KEY (supplier_id) REFERENCES Supplier(id)
);

CREATE TABLE Sale (
    id INT IDENTITY PRIMARY KEY,
    product_id INT NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    quantity INT NOT NULL,
    sale_date DATE NOT NULL,
    FOREIGN KEY (product_id) REFERENCES Product(id)
);
