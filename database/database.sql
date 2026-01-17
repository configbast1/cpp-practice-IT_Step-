
USE [master]
GO
/****** Object:  Database [marlet.dbilo]    Script Date: 17.01.2026 16:33:14 ******/
CREATE DATABASE [marlet.dbilo]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'marlet.dbilo', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL17.MSSQLSERVER\MSSQL\DATA\marlet.dbilo.mdf' , SIZE = 12288KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'marlet.dbilo_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL17.MSSQLSERVER\MSSQL\DATA\marlet.dbilo_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT, LEDGER = OFF
GO
ALTER DATABASE [marlet.dbilo] SET COMPATIBILITY_LEVEL = 170
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [marlet.dbilo].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [marlet.dbilo] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [marlet.dbilo] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [marlet.dbilo] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [marlet.dbilo] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [marlet.dbilo] SET ARITHABORT OFF 
GO
ALTER DATABASE [marlet.dbilo] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [marlet.dbilo] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [marlet.dbilo] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [marlet.dbilo] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [marlet.dbilo] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [marlet.dbilo] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [marlet.dbilo] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [marlet.dbilo] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [marlet.dbilo] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [marlet.dbilo] SET  DISABLE_BROKER 
GO
ALTER DATABASE [marlet.dbilo] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [marlet.dbilo] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [marlet.dbilo] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [marlet.dbilo] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [marlet.dbilo] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [marlet.dbilo] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [marlet.dbilo] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [marlet.dbilo] SET RECOVERY FULL 
GO
ALTER DATABASE [marlet.dbilo] SET  MULTI_USER 
GO
ALTER DATABASE [marlet.dbilo] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [marlet.dbilo] SET DB_CHAINING OFF 
GO
ALTER DATABASE [marlet.dbilo] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [marlet.dbilo] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [marlet.dbilo] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [marlet.dbilo] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
ALTER DATABASE [marlet.dbilo] SET OPTIMIZED_LOCKING = OFF 
GO
EXEC sys.sp_db_vardecimal_storage_format N'marlet.dbilo', N'ON'
GO
ALTER DATABASE [marlet.dbilo] SET QUERY_STORE = ON
GO
ALTER DATABASE [marlet.dbilo] SET QUERY_STORE (OPERATION_MODE = READ_WRITE, CLEANUP_POLICY = (STALE_QUERY_THRESHOLD_DAYS = 30), DATA_FLUSH_INTERVAL_SECONDS = 900, INTERVAL_LENGTH_MINUTES = 60, MAX_STORAGE_SIZE_MB = 1000, QUERY_CAPTURE_MODE = AUTO, SIZE_BASED_CLEANUP_MODE = AUTO, MAX_PLANS_PER_QUERY = 200, WAIT_STATS_CAPTURE_MODE = ON)
GO
USE [marlet.dbilo]
GO
/****** Object:  Table [dbo].[Address]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Address](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[street] [nvarchar](150) NOT NULL,
	[city_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Category]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Category](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[City]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[City](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
	[region_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Country]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Country](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Delivery]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Delivery](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[product_id] [int] NOT NULL,
	[supplier_id] [int] NOT NULL,
	[price] [decimal](10, 2) NOT NULL,
	[quantity] [int] NOT NULL,
	[delivery_date] [date] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[market1]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[market1](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NULL,
	[category] [nvarchar](50) NULL,
	[price] [float] NULL,
	[discount] [decimal](5, 2) NULL,
	[quantity] [int] NULL,
	[measurement] [nvarchar](20) NULL,
	[produser] [nvarchar](100) NULL,
	[country] [nvarchar](50) NULL,
	[supplier] [nvarchar](100) NULL,
	[date_of_delivery] [date] NULL,
	[expire_date] [date] NULL,
 CONSTRAINT [PK_market1] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Markup]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Markup](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](50) NOT NULL,
	[percent_value] [decimal](5, 2) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Measurement]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Measurement](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](50) NOT NULL,
	[description] [nvarchar](200) NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Producer]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Producer](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
	[address_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Product]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Product](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
	[category_id] [int] NOT NULL,
	[price] [decimal](10, 2) NOT NULL,
	[quantity] [int] NOT NULL,
	[producer_id] [int] NOT NULL,
	[measurement_id] [int] NOT NULL,
	[markup_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Region]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Region](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
	[country_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Sale]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Sale](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[product_id] [int] NOT NULL,
	[price] [decimal](10, 2) NOT NULL,
	[quantity] [int] NOT NULL,
	[sale_date] [date] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Supplier]    Script Date: 17.01.2026 16:33:14 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Supplier](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](100) NOT NULL,
	[address_id] [int] NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[market1] ON 

INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (1, N'milk', N'dairy', 32.5, CAST(0.00 AS Decimal(5, 2)), 210, N'bottle', N'molokia', N'Ukraine', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-04-10' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (2, N'butter', N'dair', 60.66, CAST(5.00 AS Decimal(5, 2)), 100, N'pack', N'sallfood', N'Ukraine', N'freefood', CAST(N'2025-01-18' AS Date), CAST(N'2025-07-10' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (3, NULL, NULL, NULL, NULL, NULL, NULL, NULL, N'Ukraine', NULL, NULL, NULL)
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (4, N'chelese', N'dairy', 70.55, CAST(6.00 AS Decimal(5, 2)), 111, N'piece', N'euro', N'poland', N'freetrade', CAST(N'2025-11-10' AS Date), CAST(N'2024-01-10' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (5, N'chiken', N'meat', 130.44, CAST(7.00 AS Decimal(5, 2)), 200, N'kg', N'agrochiken', N'poland', N'freefood', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-11' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (6, N'pork steak', N'meat', 159, CAST(0.00 AS Decimal(5, 2)), 55, N'kg', N'ecomeat', N'ukraine', N'freshsuppuly', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (7, N'apple', N'fruits', 26, CAST(3.00 AS Decimal(5, 2)), 111, N'kg', N'euro', N'ukraine', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-04' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (8, N'banana', N'fruits', 30, CAST(5.00 AS Decimal(5, 2)), 100, N'kg', N'euro', N'ulkraine', N'freefood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-07' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (9, N'potato', N'vegatabeles', 45, CAST(7.00 AS Decimal(5, 2)), 142, N'kg', N'euro', N'ukraine', N'freefood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-06' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (10, N'bread', N'bakery', 21, CAST(6.00 AS Decimal(5, 2)), 150, N'kg', N'euro', N'poland', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-08' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (11, N'bagguette', N'bakery', 15, CAST(8.00 AS Decimal(5, 2)), 60, N'piece', N'sallfood', N'italy', N'freeeat', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-08' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (12, N'sugar white', N'grocery', 23, CAST(7.00 AS Decimal(5, 2)), 70, N'kg', N'euro', N'poland', N'freefood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (13, N'yogurt', N'dairy', 17, CAST(2.00 AS Decimal(5, 2)), 60, N'pack', N'molokia', N'poland', N'freefood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (14, N'olive oil', N'grocery', 21, CAST(2.00 AS Decimal(5, 2)), 150, N'bottle', N'ecofarm', N'Ukraine', N'freefod', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (15, N'eggs', N'dairy', 50, CAST(6.00 AS Decimal(5, 2)), 132, N'pack', N'ecofarm', N'ukraine', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-07' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (16, N'rice', N'grocery', 60, CAST(4.00 AS Decimal(5, 2)), 140, N'kg', N'eurograin', N'poland', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-06' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (17, N'tomatoes', N'vegatabeles', 21, CAST(2.00 AS Decimal(5, 2)), 130, N'kg', N'euro', N'poland', N'freetrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (18, N'chocolate', N'grocery', 45, CAST(9.00 AS Decimal(5, 2)), 135, N'piece', N'sweetlife', N'poland', N'freetrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-05' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (19, N'milk jelly', N'dairy', 34, CAST(7.00 AS Decimal(5, 2)), 189, N'pack', N'sweetlife', N'poland', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-20' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (20, N'vanila ice cream', N'dairy', 45, CAST(6.00 AS Decimal(5, 2)), 120, N'pacl', N'molokia', N'ukraine', N'needfood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-21' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (21, N'пицца', N'dairy', 66, CAST(8.00 AS Decimal(5, 2)), 100, N'pack', N'euro', N'poland', N'needfood', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-21' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (22, N'almond milk ', N'plant_diary', 54, CAST(1.00 AS Decimal(5, 2)), 95, N'carton', N'almonia', N'spain', N'greenine', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-25' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (23, N'goat sheese', N'fermers', 61, CAST(6.00 AS Decimal(5, 2)), 100, N'whell', N'carfarm', N'franse', N'fromagerie', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-22' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (24, N'beef', N'dried_meat', 210, CAST(3.00 AS Decimal(5, 2)), 70, N'pouch', N'meatbox', N'USA', N'freefood', CAST(N'2025-01-12' AS Date), CAST(N'2025-01-15' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (25, N'mango', N'tpopical', 70, CAST(8.00 AS Decimal(5, 2)), 111, N'crate', N'sunisland', N'poland', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-21' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (26, N'croissant', N'french_bakery', 18, CAST(7.00 AS Decimal(5, 2)), 140, N'sleeve', N'euro', N'poland', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-25' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (27, N'honey', N'natural', 20, CAST(5.00 AS Decimal(5, 2)), 150, N'pack', N'euro', N'ukraine', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-25' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (28, N'orange', N'fruits', 28, CAST(5.00 AS Decimal(5, 2)), 120, N'kg', N'clubfruit', N'USA', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-25' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (29, N'pear', N'fruits', 30, CAST(3.00 AS Decimal(5, 2)), 120, N'kg', N'euro', N'USA', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-28' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (30, N'ice cream', N'vanilla', 21, CAST(6.00 AS Decimal(5, 2)), 110, N'pack', N'euro', N'USA', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-28' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (31, N'salmon', N'fish', 89, CAST(7.00 AS Decimal(5, 2)), 134, N'kg', N'fishclub', N'USA', N'foodtrade', CAST(N'2025-01-11' AS Date), CAST(N'2025-01-28' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (32, N'tuna', N'fish', 180, CAST(9.00 AS Decimal(5, 2)), 162, N'kg', N'fishclub', N'USA', N'foodtrade', CAST(N'2025-01-10' AS Date), CAST(N'2025-01-28' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (33, N'ham', N'meat', 110, CAST(11.00 AS Decimal(5, 2)), 170, N'kg', N'agrochiken', N'italy', N'freefood', CAST(N'2025-01-09' AS Date), CAST(N'2025-01-29' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (34, N'sugar brown', N'grocery', 54, CAST(12.00 AS Decimal(5, 2)), 77, N'pack', N'euro', N'ukraine', N'freefood', CAST(N'2025-01-09' AS Date), CAST(N'2025-01-29' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (35, N'cheese', N'dairy', 72, CAST(9.00 AS Decimal(5, 2)), 124, N'kg', N'euro', N'USA', N'freefood', CAST(N'2025-01-09' AS Date), CAST(N'2025-01-30' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (36, N'chicken breast', N'meat', 211, CAST(20.00 AS Decimal(5, 2)), 67, N'pack', N'euro', N'ukranie', N'freefood', CAST(N'2025-01-02' AS Date), CAST(N'2025-01-30' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (37, N'rice brown', N'grocery', 70, CAST(17.00 AS Decimal(5, 2)), 64, N'pack', N'ecofarm', N'ukraine', N'freefood', CAST(N'2025-01-02' AS Date), CAST(N'2025-01-30' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (38, N'bun', N'grocery', 98, CAST(20.00 AS Decimal(5, 2)), 70, N'kg', N'ecifarm', N'ukraine', N'freefood', CAST(N'2025-01-02' AS Date), CAST(N'2025-01-10' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (39, N'cake', N'grocery', 250, CAST(30.00 AS Decimal(5, 2)), 121, N'kg', N'ecofarm', N'USA', N'freefood', CAST(N'2025-01-02' AS Date), CAST(N'2025-01-10' AS Date))
INSERT [dbo].[market1] ([id], [name], [category], [price], [discount], [quantity], [measurement], [produser], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (40, N'Bulgarian cheese', N'dairy', 67, CAST(10.00 AS Decimal(5, 2)), 122, N'pack', N'ecofarm', N'Bulgarian', N'grenine', CAST(N'2025-01-02' AS Date), NULL)
SET IDENTITY_INSERT [dbo].[market1] OFF
GO
ALTER TABLE [dbo].[Address]  WITH CHECK ADD FOREIGN KEY([city_id])
REFERENCES [dbo].[City] ([id])
GO
ALTER TABLE [dbo].[City]  WITH CHECK ADD FOREIGN KEY([region_id])
REFERENCES [dbo].[Region] ([id])
GO
ALTER TABLE [dbo].[Delivery]  WITH CHECK ADD FOREIGN KEY([product_id])
REFERENCES [dbo].[Product] ([id])
GO
ALTER TABLE [dbo].[Delivery]  WITH CHECK ADD FOREIGN KEY([supplier_id])
REFERENCES [dbo].[Supplier] ([id])
GO
ALTER TABLE [dbo].[Producer]  WITH CHECK ADD FOREIGN KEY([address_id])
REFERENCES [dbo].[Address] ([id])
GO
ALTER TABLE [dbo].[Product]  WITH CHECK ADD FOREIGN KEY([category_id])
REFERENCES [dbo].[Category] ([id])
GO
ALTER TABLE [dbo].[Product]  WITH CHECK ADD FOREIGN KEY([markup_id])
REFERENCES [dbo].[Markup] ([id])
GO
ALTER TABLE [dbo].[Product]  WITH CHECK ADD FOREIGN KEY([measurement_id])
REFERENCES [dbo].[Measurement] ([id])
GO
ALTER TABLE [dbo].[Product]  WITH CHECK ADD FOREIGN KEY([producer_id])
REFERENCES [dbo].[Producer] ([id])
GO
ALTER TABLE [dbo].[Region]  WITH CHECK ADD FOREIGN KEY([country_id])
REFERENCES [dbo].[Country] ([id])
GO
ALTER TABLE [dbo].[Sale]  WITH CHECK ADD FOREIGN KEY([product_id])
REFERENCES [dbo].[Product] ([id])
GO
ALTER TABLE [dbo].[Supplier]  WITH CHECK ADD FOREIGN KEY([address_id])
REFERENCES [dbo].[Address] ([id])
GO
USE [master]
GO
ALTER DATABASE [marlet.dbilo] SET  READ_WRITE 
GO
