USE [reilway]
GO
/****** Object:  Table [dbo].[book]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[book](
	[book_id] [int] NOT NULL,
	[passenger_id] [int] NULL,
	[ticket_id] [int] NULL,
	[train_num] [int] NULL,
	[book_time] [time](7) NULL,
	[book_date] [date] NULL,
PRIMARY KEY CLUSTERED 
(
	[book_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[cancel]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[cancel](
	[id] [int] NOT NULL,
	[ticket_id] [int] NULL,
	[user_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[maneger]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[maneger](
	[manger_id] [int] NOT NULL,
	[fname] [varchar](100) NULL,
	[lname] [varchar](100) NULL,
	[gender] [char](1) NULL,
	[age] [int] NULL,
	[phone_num] [varchar](100) NULL,
	[email] [varchar](100) NULL,
	[country] [varchar](100) NULL,
	[city] [varchar](100) NULL,
	[pincode] [varchar](100) NULL,
	[pass] [varchar](100) NULL,
	[security_ques] [varchar](100) NULL,
	[security_ans] [varchar](100) NULL,
	[station_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[manger_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[passenger]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[passenger](
	[passenger_id] [int] NOT NULL,
	[passenger_num] [int] NULL,
	[age] [int] NULL,
	[gender] [char](1) NULL,
	[reservation_statue] [char](1) NULL,
	[seat_numbers] [varchar](100) NULL,
	[name_passenger] [varchar](100) NULL,
	[ticket_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[passenger_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[station]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[station](
	[station_id] [int] NOT NULL,
	[SName] [varchar](100) NULL,
	[hault] [int] NULL,
	[arrival_time] [time](7) NULL,
	[train_num] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[station_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Ticket]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Ticket](
	[tiket_id] [int] NOT NULL,
	[st_id] [int] NULL,
	[user_id] [int] NULL,
	[status] [char](1) NULL,
	[numofpassengers] [int] NULL,
	[trainum] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[tiket_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Train]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Train](
	[trainID] [int] NOT NULL,
	[trainame] [varchar](100) NULL,
	[source_loccation] [varchar](100) NULL,
	[distenation_location] [varchar](100) NULL,
	[departuredate] [date] NULL,
	[departuretime] [time](7) NULL,
	[availableseats] [char](1) NULL,
PRIMARY KEY CLUSTERED 
(
	[trainID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[train_station]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[train_station](
	[st_id] [int] NULL,
	[tr_id] [int] NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[train_status]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[train_status](
	[train_num] [int] NOT NULL,
	[a_seats] [int] NULL,
	[b_seats] [int] NULL,
	[w_seats] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[train_num] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Users]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Users](
	[user_id] [int] NOT NULL,
	[fname] [varchar](100) NULL,
	[lname] [varchar](100) NULL,
	[gender] [char](1) NULL,
	[age] [int] NULL,
	[phone_num] [varchar](100) NULL,
	[email] [varchar](100) NULL,
	[country] [varchar](100) NULL,
	[city] [varchar](100) NULL,
	[pincode] [varchar](100) NULL,
	[pass] [varchar](100) NULL,
	[security_ques] [varchar](100) NULL,
	[security_ans] [varchar](100) NULL,
	[passenger_id] [int] NULL,
	[book_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[user_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[worker]    Script Date: 5/20/2022 2:17:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[worker](
	[worker_id] [int] NOT NULL,
	[fname] [varchar](100) NULL,
	[lname] [varchar](100) NULL,
	[gender] [char](1) NULL,
	[age] [int] NULL,
	[phone_num] [varchar](100) NULL,
	[email] [varchar](100) NULL,
	[country] [varchar](100) NULL,
	[city] [varchar](100) NULL,
	[pincode] [varchar](100) NULL,
	[pass] [varchar](100) NULL,
	[security_ques] [varchar](100) NULL,
	[security_ans] [varchar](100) NULL,
	[station_id] [int] NULL,
	[manger_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[worker_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
ALTER TABLE [dbo].[book]  WITH CHECK ADD FOREIGN KEY([passenger_id])
REFERENCES [dbo].[passenger] ([passenger_id])
GO
ALTER TABLE [dbo].[book]  WITH CHECK ADD FOREIGN KEY([ticket_id])
REFERENCES [dbo].[Ticket] ([tiket_id])
GO
ALTER TABLE [dbo].[book]  WITH CHECK ADD FOREIGN KEY([train_num])
REFERENCES [dbo].[train_status] ([train_num])
GO
ALTER TABLE [dbo].[cancel]  WITH CHECK ADD FOREIGN KEY([ticket_id])
REFERENCES [dbo].[Ticket] ([tiket_id])
GO
ALTER TABLE [dbo].[cancel]  WITH CHECK ADD FOREIGN KEY([user_id])
REFERENCES [dbo].[Users] ([user_id])
GO
ALTER TABLE [dbo].[maneger]  WITH CHECK ADD FOREIGN KEY([station_id])
REFERENCES [dbo].[station] ([station_id])
GO
ALTER TABLE [dbo].[passenger]  WITH CHECK ADD FOREIGN KEY([ticket_id])
REFERENCES [dbo].[Ticket] ([tiket_id])
GO
ALTER TABLE [dbo].[Ticket]  WITH CHECK ADD FOREIGN KEY([st_id])
REFERENCES [dbo].[station] ([station_id])
GO
ALTER TABLE [dbo].[train_station]  WITH CHECK ADD FOREIGN KEY([st_id])
REFERENCES [dbo].[station] ([station_id])
GO
ALTER TABLE [dbo].[train_station]  WITH CHECK ADD FOREIGN KEY([tr_id])
REFERENCES [dbo].[Train] ([trainID])
GO
ALTER TABLE [dbo].[Users]  WITH CHECK ADD FOREIGN KEY([book_id])
REFERENCES [dbo].[book] ([book_id])
GO
ALTER TABLE [dbo].[Users]  WITH CHECK ADD FOREIGN KEY([passenger_id])
REFERENCES [dbo].[passenger] ([passenger_id])
GO
ALTER TABLE [dbo].[worker]  WITH CHECK ADD FOREIGN KEY([manger_id])
REFERENCES [dbo].[maneger] ([manger_id])
GO
ALTER TABLE [dbo].[worker]  WITH CHECK ADD FOREIGN KEY([station_id])
REFERENCES [dbo].[station] ([station_id])
GO
