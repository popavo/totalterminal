#import "TTAccessibleView.h"

@class TTPane;

@interface TTView : TTAccessibleView<NSTextInput, NSAnimationDelegate> { }

@property (nonatomic, retain) TTPane *pane;

-(void)returnToDefaultSize:(id)arg1;

@end
