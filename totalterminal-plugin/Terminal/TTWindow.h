@class TTTabController;

@interface TTWindow : NSWindow { }

@property NSRect dragFrame;

-(TTTabController*)selectedTabController;
-(NSArray*)tabControllers;

-(NSRect)defaultFrame;
-(NSRect)fullScreenFrame;

-(id)handleDoScriptCommand:(id)command;

@end