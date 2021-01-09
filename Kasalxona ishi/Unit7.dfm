object Form_Bemorlar: TForm_Bemorlar
  Left = 327
  Top = 89
  Caption = 'Bemorlar haqida malumot qo'#39'shish'
  ClientHeight = 691
  ClientWidth = 1278
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1278
    Height = 691
    Align = alClient
    PopupMenu = PopupMenu1
    TabOrder = 0
    ExplicitWidth = 1341
    object Label10: TLabel
      Left = 270
      Top = 2
      Width = 30
      Height = 16
      Caption = 'Sana'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 461
      Top = -1
      Width = 29
      Height = 16
      Caption = 'Sana'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 639
      Top = 44
      Width = 33
      Height = 16
      Caption = 'Holati'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 862
      Top = 44
      Width = 139
      Height = 16
      Hint = 'Kasalxonada qo'#39'yilgan tashhis sanasi'
      Caption = 'Kasallik aniqlangan sana'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
    end
    object Label7: TLabel
      Left = 1016
      Top = 42
      Width = 117
      Height = 16
      Caption = 'Kasalxonaga yotishi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label1: TLabel
      Left = 367
      Top = 45
      Width = 99
      Height = 16
      Caption = 'Rezus mansubligi'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label0: TLabel
      Left = 287
      Top = 45
      Width = 63
      Height = 16
      Caption = 'Qon guruhi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 972
      Top = -1
      Width = 147
      Height = 16
      Caption = 'Bemorni olib yurish turlari'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 1199
      Top = -1
      Width = 26
      Height = 16
      Caption = 'Jinsi'
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
    end
    object SpeedButton1: TSpeedButton
      Left = 993
      Top = 629
      Width = 164
      Height = 22
      Caption = 'Saqlash'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
      OnClick = SpeedButton1Click
    end
    object SpeedButton2: TSpeedButton
      Left = 1186
      Top = 626
      Width = 164
      Height = 22
      Caption = 'Chiqish'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      OnClick = SpeedButton2Click
    end
    object SpeedButton3: TSpeedButton
      Left = 993
      Top = 601
      Width = 178
      Height = 22
      Caption = 'O'#39'zgartirishlarni saqlash'
      Flat = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
      OnClick = SpeedButton3Click
    end
    object Muassasaning_nomi: TLabeledEdit
      Left = 11
      Top = 21
      Width = 129
      Height = 22
      Ctl3D = False
      EditLabel.Width = 116
      EditLabel.Height = 16
      EditLabel.Caption = 'Muassasaning nomi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
    end
    object Muassasaning_kodi: TLabeledEdit
      Left = 152
      Top = 21
      Width = 82
      Height = 22
      Ctl3D = False
      EditLabel.Width = 112
      EditLabel.Height = 16
      EditLabel.Caption = 'Muassasaning kodi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 1
    end
    object Dorilarning_nojoya_tasiri: TLabeledEdit
      Left = 13
      Top = 109
      Width = 943
      Height = 24
      Ctl3D = True
      EditLabel.Width = 400
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Dorilarning nojo'#39'ya tasiri (Dorilarning nomi, nojo'#39'ya tasirining' +
        ' ko'#39'rinishi)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 2
    end
    object Kasalxonaga_yotqizilgan_vaqt: TLabeledEdit
      Left = 365
      Top = 21
      Width = 66
      Height = 22
      Hint = 'Kasalxonaga yotqizilgan vaqt'
      Ctl3D = False
      EditLabel.Width = 26
      EditLabel.Height = 16
      EditLabel.Caption = 'Vaqt'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 3
    end
    object Kasalxonadan_chiqarilgan_vaqt: TLabeledEdit
      Left = 556
      Top = 20
      Width = 64
      Height = 22
      Hint = 'Kasalxonadan chiqarilgan vaqt'
      Ctl3D = False
      EditLabel.Width = 26
      EditLabel.Height = 16
      EditLabel.Caption = 'Vaqt'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 4
    end
    object Qaysi_bolimga_otkazildi: TLabeledEdit
      Left = 632
      Top = 20
      Width = 141
      Height = 22
      Hint = 'Qaysi bo'#39'limga o'#39'tkazildi'
      Ctl3D = False
      EditLabel.Width = 67
      EditLabel.Height = 16
      EditLabel.Caption = 'Bo'#39'lim nomi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 5
    end
    object Necha_kun_yotib_davolangan: TLabeledEdit
      Left = 789
      Top = 20
      Width = 65
      Height = 22
      Hint = 'Necha kun yotib davolangan'
      Ctl3D = False
      EditLabel.Width = 23
      EditLabel.Height = 16
      EditLabel.Caption = 'Kun'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 6
    end
    object Doimiy_yashash_joyi: TLabeledEdit
      Left = 13
      Top = 153
      Width = 943
      Height = 24
      TabStop = False
      Ctl3D = True
      EditLabel.Width = 948
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Doimiy yashash joyi(Yashash joyi ko'#39'rsatilsin, viloyat va tumanl' +
        'ardan kelganlar uchun manzili va yaqin qarindoshlarining yashash' +
        ' joyi va telefon raqamlari ko'#39'rsatilsin)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      EditLabel.ParentShowHint = False
      EditLabel.ShowHint = True
      EditLabel.WordWrap = True
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 7
    end
    object Ish_joyi_kasbi: TLabeledEdit
      Left = 11
      Top = 196
      Width = 945
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 965
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Ish joyi, kasbi, lavozimi(Yashash joyi ko'#39'rsatilsin, viloyat va ' +
        'tumanlardan kelganlar uchun manzili va yaqin qarindoshlarining y' +
        'ashash joyi va telefon raqamlari ko'#39'rsatilsin)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 8
    end
    object Bemor_qayerdan_yuborilgan: TLabeledEdit
      Left = 472
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Davolash muassasasi nomi'
      Ctl3D = False
      EditLabel.Width = 158
      EditLabel.Height = 16
      EditLabel.Caption = 'Bemor qayerdan yuborilgan'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 9
    end
    object qanday_transportda: TLabeledEdit
      Left = 709
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Shifoxonaga qanday transportda keltirilgan'
      Ctl3D = False
      EditLabel.Width = 118
      EditLabel.Height = 16
      EditLabel.Caption = 'Qanday transportda '
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 10
    end
    object Holati: TComboBox
      Left = 639
      Top = 64
      Width = 50
      Height = 24
      Hint = 'Kasalxonaga shoshilinch ravishda keltirilganmi ?'
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 11
      Text = 'Ha'
      Items.Strings = (
        'Ha'
        'Yo'#39'q')
    end
    object bemor_yollanmasidagi_tashhisi: TLabeledEdit
      Left = 11
      Top = 239
      Width = 945
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 383
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                   Bemor yo'#39'llan' +
        'masidagi tashhisi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 12
    end
    object Qabulxonada_qoyilgan_tashhis: TLabeledEdit
      Left = 11
      Top = 278
      Width = 945
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 380
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                   Qabulxonada q' +
        'o'#39'yilgan tashhis'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 13
    end
    object Kasalxonada_qoyilgan_tashhis: TLabeledEdit
      Left = 11
      Top = 319
      Width = 945
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 375
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                  Kasalxonada qo' +
        #39'yilgan tashhis'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 14
    end
    object GroupBox1: TGroupBox
      Left = 8
      Top = 349
      Width = 954
      Height = 156
      Caption = 'Kasalxonada qo'#39'yilgan yakuniy tashhis'
      DoubleBuffered = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      TabOrder = 15
      object Aniqlangan_xamroh_kasalliklr: TLabeledEdit
        Left = 3
        Top = 114
        Width = 950
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 444
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '    Aniqlangan xamroh kasalliklar'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 0
      end
      object Asosiy_kasallik_asorati: TLabeledEdit
        Left = 3
        Top = 71
        Width = 948
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 430
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '     Asosiy kasallikning asorati'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 1
      end
      object Asosiy: TLabeledEdit
        Left = 3
        Top = 30
        Width = 948
        Height = 24
        AutoSize = False
        Ctl3D = True
        EditLabel.Width = 359
        EditLabel.Height = 16
        EditLabel.Caption = 
          '                                                                ' +
          '                Asosiy'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ImeMode = imSAlpha
        LabelSpacing = 2
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 2
      end
    end
    object Kasalxonaga_yotishi: TComboBox
      Left = 1016
      Top = 64
      Width = 115
      Height = 24
      Hint = 'Mazkur yil davomida shu kasallik bo'#39'yicha'
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 16
      Text = 'Birinchi marta'
      Items.Strings = (
        'Birinchi marta'
        'Qayta')
    end
    object Hammasi_bolib: TLabeledEdit
      Left = 1160
      Top = 64
      Width = 94
      Height = 22
      Ctl3D = False
      EditLabel.Width = 88
      EditLabel.Height = 16
      EditLabel.Caption = 'Hammasi bo'#39'lib'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 17
    end
    object GroupBox2: TGroupBox
      Left = 962
      Top = 109
      Width = 508
      Height = 193
      Caption = 'Operasiya natijalari'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 18
      object Operasiya_nomi: TLabeledEdit
        Left = 16
        Top = 30
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 251
        EditLabel.Height = 16
        EditLabel.Caption = '                                       Operasiya nomi '
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = False
        TabOrder = 0
      end
      object Ogriqsizlantirish_usuli: TLabeledEdit
        Left = 16
        Top = 116
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 282
        EditLabel.Height = 16
        EditLabel.Caption = '                                       Og'#39'riqsizlantirish usuli'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 1
      end
      object Asoratlar: TLabeledEdit
        Left = 16
        Top = 71
        Width = 353
        Height = 22
        Ctl3D = False
        EditLabel.Width = 203
        EditLabel.Height = 16
        EditLabel.Caption = '                                      Asoratlar'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 2
      end
      object Operatsiya_Vaqti: TLabeledEdit
        Left = 271
        Top = 159
        Width = 90
        Height = 22
        Hint = 'Operasiya davom etgan vaqti'
        Ctl3D = False
        EditLabel.Width = 61
        EditLabel.Height = 16
        EditLabel.Caption = 'Vaqti soati'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 3
      end
      object Operasiya_qiluvchi: TLabeledEdit
        Left = 18
        Top = 158
        Width = 203
        Height = 22
        Ctl3D = False
        EditLabel.Width = 105
        EditLabel.Height = 16
        EditLabel.Caption = 'Operasiya qiluvchi'
        EditLabel.Color = clBtnText
        EditLabel.Font.Charset = RUSSIAN_CHARSET
        EditLabel.Font.Color = clWindowText
        EditLabel.Font.Height = -13
        EditLabel.Font.Name = 'Arial'
        EditLabel.Font.Style = []
        EditLabel.ParentColor = False
        EditLabel.ParentFont = False
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = []
        ParentCtl3D = False
        ParentFont = False
        ParentShowHint = False
        ShowHint = True
        TabOrder = 4
      end
    end
    object Rezus_mansubligi: TComboBox
      Left = 372
      Top = 64
      Width = 73
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 19
      Text = 'Manfiy'
      Items.Strings = (
        'Manfiy'
        'Musbat')
    end
    object Qon_guruhi: TComboBox
      Left = 287
      Top = 64
      Width = 61
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 20
      Text = 'I'
      Items.Strings = (
        'I'
        'II'
        'III'
        'IV')
    end
    object Davolashning_boshqa_turlari: TLabeledEdit
      Left = 13
      Top = 524
      Width = 948
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 493
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                                ' +
        '    Davolashning boshqa turlari(ko'#39'rsating)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 21
    end
    object Mexnatga_yaroqsizlik_varogi: TLabeledEdit
      Left = 13
      Top = 570
      Width = 949
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 929
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Mexnatga yaroqsizlik varog'#39'i yoki malumotnoma('#8470'_________________' +
        '____dan __________________gacha '#8470'_________________dan___________' +
        '____gacha)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 22
    end
    object Davolash_natijasi: TLabeledEdit
      Left = 11
      Top = 617
      Width = 950
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 962
      EditLabel.Height = 16
      EditLabel.Caption = 
        'Davolash natijasi:kasalxonadan javob berildi, bir oz yaxshilandi' +
        ', o'#39'zgarishsiz,og'#39'rigan holda,o'#39'ldi,boshqa muassasaga o'#39'tkazildi' +
        ', qabulxonada vafot etdi, xomiladorlikdan)'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 23
    end
    object Ekspertizaga_yuborish_uchun: TLabeledEdit
      Left = 11
      Top = 660
      Width = 951
      Height = 24
      AutoSize = False
      Ctl3D = True
      EditLabel.Width = 474
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                                                ' +
        '  Ekspertizaga yuborish uchun xulosa'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ImeMode = imSAlpha
      LabelSpacing = 2
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 24
    end
    object Bemorni_olib_yurish_turlari: TComboBox
      Left = 974
      Top = 20
      Width = 110
      Height = 21
      ItemIndex = 0
      TabOrder = 25
      Text = 'Aravachada'
      Items.Strings = (
        'Aravachada'
        'Zambilda'
        'O'#39'zi yura oladi')
    end
    object Yoshi: TLabeledEdit
      Left = 1129
      Top = 20
      Width = 61
      Height = 22
      Hint = 
        'To'#39'liq yosh, bolalar uchun: 1 yoshgacha oylar hisobida 2-oygacha' +
        ' kunlar hisobida'
      Ctl3D = False
      EditLabel.Width = 32
      EditLabel.Height = 16
      EditLabel.Caption = 'Yoshi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 26
    end
    object JInsi: TComboBox
      Left = 1199
      Top = 20
      Width = 73
      Height = 24
      Ctl3D = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ItemIndex = 0
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 27
      Text = 'Erkak'
      Items.Strings = (
        'Erkak'
        'Ayol')
    end
    object Familiyasi: TLabeledEdit
      Left = 11
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Bemor familiyasi'
      Ctl3D = False
      EditLabel.Width = 59
      EditLabel.Height = 16
      EditLabel.Caption = 'Familiyasi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 28
    end
    object Ismi: TLabeledEdit
      Left = 150
      Top = 64
      Width = 129
      Height = 22
      Hint = 'Bemor Ismi'
      Ctl3D = False
      EditLabel.Width = 24
      EditLabel.Height = 16
      EditLabel.Caption = 'Ismi'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 29
    end
    object Alohida_belgilari: TLabeledEdit
      Left = 979
      Top = 320
      Width = 356
      Height = 22
      Ctl3D = False
      EditLabel.Width = 242
      EditLabel.Height = 16
      EditLabel.Caption = '                                      Alohida belgilari'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 30
    end
    object Qabul_qilinganda_tekshirildi: TLabeledEdit
      Left = 980
      Top = 380
      Width = 355
      Height = 22
      Ctl3D = False
      EditLabel.Width = 307
      EditLabel.Height = 16
      EditLabel.Caption = 
        '                                      Qabul qilinganda tekshiril' +
        'di'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = False
      TabOrder = 31
    end
    object Davolash_shifokori: TLabeledEdit
      Left = 980
      Top = 432
      Width = 203
      Height = 22
      Ctl3D = False
      EditLabel.Width = 104
      EditLabel.Height = 16
      EditLabel.Caption = 'Davolash shifokori'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 32
    end
    object Bolim_mudiri: TLabeledEdit
      Left = 979
      Top = 477
      Width = 204
      Height = 22
      Ctl3D = False
      EditLabel.Width = 74
      EditLabel.Height = 16
      EditLabel.Caption = 'Bo'#39'lim mudiri'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 33
    end
    object Button2: TButton
      Left = 978
      Top = 514
      Width = 205
      Height = 23
      Hint = 
        'Shikoyatlar, kasallik tarixi, ahvolidagi o'#39'zgarishlar, taxminiy ' +
        'diagnoz, tekshirish rejasi'
      Caption = 'Qo'#39'shimcha oynalar'
      DoubleBuffered = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentDoubleBuffered = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 34
      OnClick = Button2Click
    end
    object Xona: TLabeledEdit
      Left = 873
      Top = 20
      Width = 88
      Height = 22
      Hint = 'Qaysi xonada davolandi'
      Ctl3D = False
      EditLabel.Width = 28
      EditLabel.Height = 16
      EditLabel.Caption = 'Xona'
      EditLabel.Color = clBtnText
      EditLabel.Font.Charset = RUSSIAN_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -13
      EditLabel.Font.Name = 'Arial'
      EditLabel.Font.Style = []
      EditLabel.ParentColor = False
      EditLabel.ParentFont = False
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = []
      ParentCtl3D = False
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 35
    end
    object MaskEdit1: TMaskEdit
      Left = 264
      Top = 21
      Width = 95
      Height = 24
      Hint = 'Kasalxonaga yotqizilgan sana'
      EditMask = '!99:99:9999;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 10
      ParentFont = False
      TabOrder = 36
      Text = '  :  :    '
    end
    object MaskEdit2: TMaskEdit
      Left = 455
      Top = 21
      Width = 95
      Height = 24
      Hint = 'Kasalxonadan chiqarilgan sana'
      EditMask = '!99:99:9999;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 10
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 37
      Text = '  :  :    '
    end
    object MaskEdit3: TMaskEdit
      Left = 864
      Top = 64
      Width = 95
      Height = 24
      EditMask = '!99:99:9999;1;_'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 10
      ParentFont = False
      TabOrder = 38
      Text = '  :  :    '
    end
    object Edit1: TEdit
      Left = 864
      Top = 65
      Width = 98
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 39
      Visible = False
    end
    object Edit2: TEdit
      Left = 452
      Top = 21
      Width = 98
      Height = 24
      Hint = 'Kasalxonadan chiqarilgan sana'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 40
      Visible = False
    end
  end
  object Edit3: TEdit
    Left = 264
    Top = 20
    Width = 95
    Height = 24
    Hint = 'Kasalxonaga yotqizilgan sana'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Visible = False
  end
  object PopupMenu1: TPopupMenu
    Left = 296
    Top = 104
    object Saqlash1: TMenuItem
      Caption = 'Saqlash'
      OnClick = SpeedButton1Click
    end
    object Kundalik1: TMenuItem
      Caption = 'Kundalik'
    end
    object Xotima1: TMenuItem
      Caption = 'Xotima'
    end
    object Qabulxonashifokorining1: TMenuItem
      Caption = 'Qabulxona shifokorining yozuvi '
    end
    object Shikoyatlarkasalliktarixi1: TMenuItem
      Caption = 'Shikoyatlar kasallik tarixi'
      OnClick = Button2Click
    end
    object Patollogoanatomxulosasi1: TMenuItem
      Caption = 'Patollogoanatom xulosasi'
    end
    object N1: TMenuItem
      Caption = '-'
    end
    object Chiqish1: TMenuItem
      Caption = 'Chiqish'
    end
  end
end
