#import "TotalTerminal.h"

@interface TotalTerminal (Helpers)

+(void)closeExistingWindows;
+(BOOL)hasVisorProfile;
+(id)getVisorProfile;

-(bool)isCurrentylyActive;
-(void)storePreviouslyActiveApp;
-(void)updatePreviouslyActiveApp;
-(void)setPreviouslyActiveApp:(NSRunningApplication*)previouslyActiveApp activeApp:(NSRunningApplication*)activeApp;
-(void)restorePreviouslyActiveApp;

-(void)sendVisorWindowID;

@end
