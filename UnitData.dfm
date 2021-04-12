object DataModule1: TDataModule1
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 235
  Width = 408
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DriverID=SQLite')
    LoginPrompt = False
    Left = 336
    Top = 168
  end
  object FDTableSintomas: TFDTable
    IndexFieldNames = 'sintomaid'
    Connection = FDConnection1
    UpdateOptions.UpdateTableName = 'sintomas'
    TableName = 'sintomas'
    Left = 40
    Top = 24
  end
  object FDQueryCausas: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from viewcausas where sintomaid = :sintomaid')
    Left = 32
    Top = 80
    ParamData = <
      item
        Name = 'SINTOMAID'
        DataType = ftInteger
        ParamType = ptInput
        Value = 1
      end>
  end
  object FDQueryCausas2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from viewcausas where causaid = :causaid')
    Left = 152
    Top = 80
    ParamData = <
      item
        Name = 'CAUSAID'
        DataType = ftInteger
        ParamType = ptInput
        Value = 1
      end>
  end
  object FDTableConfig: TFDTable
    IndexFieldNames = 'idconfig'
    Connection = FDConnection1
    UpdateOptions.UpdateTableName = 'config'
    TableName = 'config'
    Left = 152
    Top = 24
  end
  object FDPhysSQLiteDriverLink1: TFDPhysSQLiteDriverLink
    Left = 240
    Top = 176
  end
end
