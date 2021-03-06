//
//  OBAInfoViewController.h
//  org.onebusaway.iphone
//
//  Created by Aaron Brethorst on 9/17/12.
//
//

#import <UIKit/UIKit.h>
#import "OBAStaticTableViewController.h"
#import "OBANavigationTargetAware.h"

NS_ASSUME_NONNULL_BEGIN

@class OBAApplicationDelegate;

@interface OBAInfoViewController : OBAStaticTableViewController<OBANavigationTargetAware>
- (void)openAgencies;
@end

NS_ASSUME_NONNULL_END