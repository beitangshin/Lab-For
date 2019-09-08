(define-key global-map [C-return] 'set-mark-command)
(global-linum-mode t)
(defun copy-line-newline (&optional arg)
  "by wql"
    (interactive "P") ;must have, why?
      (copy-line arg)
        (newline)
	  (clipboard-yank)
	    )
	    (global-set-key (kbd "C-x RET") 'copy-line-newline)
