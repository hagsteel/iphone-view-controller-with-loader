//
//  DPTableViewController_arc.h
//  
//
//  Created by Jonas Hagstedt.
//

#import <UIKit/UIKit.h>

@interface DPTableViewController_arc : UITableViewController {
	UIActivityIndicatorView *_loader;
	UIImageView *_loaderBackgroundView;

}
- (void)showLoader;
- (void)hideLoader;
@end
