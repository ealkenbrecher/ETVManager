; -- installer.iss --

[Setup]
AppName=ETVManager
AppId={{7118B2C6-0E93-43A3-9EE1-735663508FB9}
AppVersion=1.6
AppPublisher=ETVManager
AppPublisherURL=http://www.hausverwaltung-alkenbrecher.de/
DefaultDirName={pf}\ETVManager
DefaultGroupName=ETVManager
UninstallDisplayIcon={app}\ETVManager.exe
Compression=lzma
SolidCompression=yes
OutputDir=userdocs:Inno Setup Examples Output

[Files]
Source: "..\src\*.*"; DestDir: "{app}"; Flags: recursesubdirs

[Icons]
Name: "{group}\ETVManager"; Filename: "{app}\ETVManager.exe"
Name: "{group}\Uninstall ETVManager"; Filename: "{uninstallexe}"
