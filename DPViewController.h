//
//  DPViewController.h
//
//  Created by Jonas Hagstedt.
//

#import <UIKit/UIKit.h>

@interface DPViewController : UIViewController {
	UIActivityIndicatorView *_loader;
	UIImageView *_loaderBackgroundView;
}

- (void)showLoader;
- (void)hideLoader;
@end
