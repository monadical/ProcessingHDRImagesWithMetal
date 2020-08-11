/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Header for the iOS view controller.
*/

@import UIKit;

// Our view controller
@interface AAPLViewControllerIOS : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
// For menu bar interaction
@property (nonatomic) BOOL isUIDisplayed;
@end

