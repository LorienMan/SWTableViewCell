#import <UIKit/UIKit.h>


@class SWTableViewCell;

@interface SWUtilityView : UIView
@property (nonatomic, strong) IBOutlet NSNumber *width;
@property (nonatomic) CGFloat height;

- (CGFloat)utilityViewWidth;

@end
